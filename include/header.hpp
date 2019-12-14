// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <boost/filesystem.hpp>

#define correctSubStr 8
#define correctSizeStr 29

class broker {
public:
    explicit broker(std::string &nameBroker) : _nameBroker(nameBroker) {}

    struct Account {
        std::string numberBroker;
        std::string lastDateBroker;
        size_t filesBroker;
        std::string nameBroker;
    };
    std::string _nameBroker;
    std::unordered_map<std::string, Account> _account;

    void add_account(const std::string &number_Broker, std::string lastDateBr) {
        auto it = _account.find(number_Broker);
        if (it == _account.end()) {
            _account[number_Broker].nameBroker = _nameBroker;
            _account[number_Broker].numberBroker = number_Broker;
            _account[number_Broker].lastDateBroker = lastDateBr;

        } else {
            it->second.filesBroker += 1;
            if (lastDateBr > it->second.lastDateBroker)
                it->second.lastDateBroker = lastDateBr;
        }
    }
};

class myFPT {
public:
    myFPT() : _currentFile("") {}

    explicit myFPT(boost::filesystem::path currentPath)
: _currentFile(currentPath) {}

    bool trueFile(const boost::filesystem::path p) {
        std::string path = p.filename().string();
        if (path.size() != correctSizeStr) return false;
        const std::string underscorer = "_";
        auto end = path.find(underscorer);
        if (path.substr(0, end) != "balance") return false;
        end = path.find(underscorer, end) + 1;
        if (!(path.substr(end, correctSubStr).find_first_not_of("0123456789") ==
              path.substr(end, correctSubStr).npos))
            return false;
        end = path.find(underscorer, end) + 1;
        if (!(path.substr(end, correctSubStr).find_first_not_of("0123456789") ==
              path.substr(end, correctSubStr).npos))
            return false;
        end += correctSubStr;
        if (path.substr(end, path.size() - end) != ".txt") return false;
        return true;
    }

    void analysis(boost::filesystem::path currentPath) {
        for (const boost::filesystem::directory_entry &x :
boost::filesystem::directory_iterator{currentPath}) {
            if (exists(x.path())) {
                if (is_directory(x.path())) {
                    analysis(x.path());
                } else {
                    if (trueFile(x.path())) {
                        auto broker_name = x.path()
.parent_path().stem().string();
                        auto file_name = x.path().stem().string();
                        _filename.push_back(broker_name + " " + file_name);
                        auto broker_number = x.path()
.stem().string().substr(8, 8);
                        auto date =
                                x.path().stem().string().substr(17, 8).c_str();
                        auto it = brokers.find(broker_name);
                        if (it == brokers.end()) {
                            broker b(broker_name);
                            b.add_account(broker_number, date);
                            brokers.insert(std::make_pair(broker_name, b));
                        } else {
                            it->second.add_account(broker_number, date);
                        }
                    }
                }
            }
        }
    }

    std::string result() {
		std::string _str = ss.str();
        analysis(_currentFile);
        for (size_t i = 0; i < _filename.size(); ++i) {
            _str += _filename[i] + std::endl;
        }
            for (const auto &b : brokers){
                for (const auto &a : b.second._account)
                _str += "Broker:" + a.second.nameBroker+ ' '
+ "Account:" +  a.first + ' '
+ "Files:" +  a.second.filesBroker + ' '
+ "Last date:" + a.second.lastDateBroker + std::endl;
            }
    }
std::stringstream ss;
private:
    std::unordered_map<std::string, broker> brokers;
    std::vector<std::string> _filename;
    boost::filesystem::path _currentFile;
};

#endif // INCLUDE_HEADER_HPP_
