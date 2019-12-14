// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "heaser.hpp"

using boost::filesystem::all_all;

TEST(ftpTest, testing) {
    std::string str = "bcs balance_00122223_20180915"
"bcs balance_00123458_20180908"
"bcs balance_00123456_20181005"
"bcs balance_00123456_20181009"
"bcs balance_00122223_20181005"
"bcs balance_00143456_20180904"
"bcs balance_00143456_20181005"
"bcs balance_00123456_20180904"
"bcs balance_00143456_20180902"
"bcs balance_00143456_20181004"
"bcs balance_00143456_20180929"
"bcs balance_00123458_20180922"
"bcs balance_00123458_20181013"
"bcs balance_00143456_20180924"
"bcs balance_00123458_20181007"
"bcs balance_00122223_20180925"
"bcs balance_00123456_20180927"
"bcs balance_00122223_20180920"
"bcs balance_00143456_20181010"
"bcs balance_00143456_20180928"
"bcs balance_00122223_20180912"
"bcs balance_00123456_20180909"
"bcs balance_00122223_20181009"
"bcs balance_00122223_20181010"
"bcs balance_00123458_20180906"
"bcs balance_00123458_20180930"
"bcs balance_00143456_20181014"
"bcs balance_00123456_20180924"
"bcs balance_00143456_20180923"
"bcs balance_00123456_20180926"
"bcs balance_00123458_20181008"
"bcs balance_00123456_20180908"
"bcs balance_00122223_20180918"
"bcs balance_00123458_20181017"
"bcs balance_00123458_20180925"
"bcs balance_00122223_20180904"
"bcs balance_00143456_20181008"
"bcs balance_00123458_20180904"
"bcs balance_00123458_20180923"
"bcs balance_00122223_20181006"
"bcs balance_00143456_20180913"
"bcs balance_00122223_20180913"
"bcs balance_00123458_20181002"
"bcs balance_00143456_20181006"
"bcs balance_00123458_20180918"
"bcs balance_00122223_20181001"
"bcs balance_00123456_20180903"
"bcs balance_00143456_20181007"
"bcs balance_00123456_20180925"
"bcs balance_00123456_20181006"
"bcs balance_00143456_20181003"
"bcs balance_00123456_20180922"
"bcs balance_00122223_20181007"
"bcs balance_00123458_20181009"
"bcs balance_00143456_20180915"
"bcs balance_00122223_20180929"
"bcs balance_00123458_20180927"
"bcs balance_00143456_20181013"
"bcs balance_00123456_20180918"
"bcs balance_00122223_20180910"
"bcs balance_00123456_20180919"
"bcs balance_00122223_20181011"
"bcs balance_00123458_20180917"
"bcs balance_00122223_20180905"
"bcs balance_00123456_20181001"
"bcs balance_00123456_20181010"
"bcs balance_00123458_20180902"
"bcs balance_00122223_20180901"
"bcs balance_00123456_20180921"
"bcs balance_00143456_20180910"
"bcs balance_00123456_20180930"
"bcs balance_00123456_20180920"
"bcs balance_00143456_20181015"
"bcs balance_00143456_20180903"
"bcs balance_00123456_20180902"
"bcs balance_00143456_20181016"
"bcs balance_00123456_20180911"
"bcs balance_00143456_20180917"
"bcs balance_00123456_20181011"
"bcs balance_00122223_20180922"
"bcs balance_00123458_20180911"
"bcs balance_00143456_20180926"
"bcs balance_00122223_20180919"
"bcs balance_00123456_20181013"
"bcs balance_00123458_20181003"
"bcs balance_00143456_20180921"
"bcs balance_00122223_20181008"
"bcs balance_00143456_20180908"
"bcs balance_00143456_20180919"
"bcs balance_00123458_20180903"
"bcs balance_00122223_20181012"
"bcs balance_00123456_20181002"
"bcs balance_00122223_20180908"
"bcs balance_00123458_20180916"
"bcs balance_00143456_20180920"
"bcs balance_00122223_20180927"
"bcs balance_00122223_20180911"
"bcs balance_00123458_20181006"
"bcs balance_00123456_20180905"
"bcs balance_00143456_20180905"
"bcs balance_00123458_20181018"
"bcs balance_00123458_20180920"
"bcs balance_00123458_20180921"
"bcs balance_00122223_20181013"
"bcs balance_00123458_20180914"
"bcs balance_00143456_20180927"
"bcs balance_00143456_20180909"
"bcs balance_00123456_20180907"
"bcs balance_00123456_20180906"
"bcs balance_00123456_20180923"
"bcs balance_00143456_20180906"
"bcs balance_00123456_20180917"
"bcs balance_00123458_20181014"
"bcs balance_00122223_20180903"
"bcs balance_00143456_20180914"
"bcs balance_00123456_20180916"
"bcs balance_00123456_20180901"
"bcs balance_00122223_20180926"
"bcs balance_00123456_20180928"
"bcs balance_00143456_20180912"
"bcs balance_00123458_20181004"
"bcs balance_00122223_20181004"
"bcs balance_00122223_20181002"
"bcs balance_00143456_20181009"
"bcs balance_00143456_20180918"
"bcs balance_00122223_20180917"
"bcs balance_00122223_20180909"
"bcs balance_00143456_20180930"
"bcs balance_00122223_20180914"
"bcs balance_00123458_20180912"
"bcs balance_00123458_20180909"
"bcs balance_00143456_20180925"
"bcs balance_00122223_20180928"
"bcs balance_00123458_20181012"
"bcs balance_00122223_20181016"
"bcs balance_00122223_20180902"
"bcs balance_00123458_20180907"
"bcs balance_00122223_20181014"
"bcs balance_00122223_20180916"
"bcs balance_00123458_20181010"
"bcs balance_00123456_20180912"
"bcs balance_00123458_20180913"
"bcs balance_00123458_20180929"
"bcs balance_00123458_20180901"
"bcs balance_00123458_20180928"
"bcs balance_00143456_20181002"
"bcs balance_00123456_20181008"
"bcs balance_00122223_20180906"
"bcs balance_00123456_20180915"
"bcs balance_00123458_20181015"
"bcs balance_00143456_20180916"
"bcs balance_00122223_20181003"
"bcs balance_00123456_20181014"
"bcs balance_00123458_20181005"
"bcs balance_00123456_20181007"
"bcs balance_00122223_20180921"
"bcs balance_00123458_20180910"
"bcs balance_00123458_20181001"
"bcs balance_00123458_20181016"
"bcs balance_00123458_20180919"
"bcs balance_00122223_20180907"
"bcs balance_00123456_20181003"
"bcs balance_00143456_20180911"
"bcs balance_00123458_20180926"
"bcs balance_00122223_20180923"
"bcs balance_00123456_20181012"
"bcs balance_00143456_20180922"
"bcs balance_00123456_20181004"
"bcs balance_00123458_20180915"
"bcs balance_00143456_20181001"
"bcs balance_00123456_20180914"
"bcs balance_00143456_20181011"
"bcs balance_00143456_20180901"
"bcs balance_00123458_20180924"
"bcs balance_00122223_20180924"
"bcs balance_00143456_20181012"
"bcs balance_00123458_20181011"
"bcs balance_00123458_20180905"
"bcs balance_00122223_20181015"
"bcs balance_00123456_20180913"
"bcs balance_00123456_20180929"
"bcs balance_00143456_20180907"
"bcs balance_00122223_20180930"
"bcs balance_00123456_20180910"
"ib balance_00100001_20180929"
"ib balance_00100003_20180916"
"ib balance_00100001_20180924"
"ib balance_00100002_20180922"
"ib balance_00100001_20180916"
"ib balance_00100002_20180901"
"ib balance_00100003_20180920"
"ib balance_00100003_20181010"
"ib balance_00100001_20180904"
"ib balance_00100002_20181005"
"ib balance_00100002_20180913"
"ib balance_00100002_20180924"
"ib balance_00100003_20180909"
"ib balance_00100002_20180904"
"ib balance_00100001_20181017"
"ib balance_00100001_20181013"
"ib balance_00100003_20180919"
"ib balance_00100002_20180907"
"ib balance_00100001_20180906"
"ib balance_00100001_20180922"
"ib balance_00100003_20181017"
"ib balance_00100003_20181004"
"ib balance_00100003_20181011"
"ib balance_00100002_20180911"
"ib balance_00100002_20181007"
"ib balance_00100001_20180909"
"ib balance_00100003_20180922"
"ib balance_00100001_20180926"
"ib balance_00100002_20181012"
"ib balance_00100002_20180910"
"ib balance_00100001_20180915"
"ib balance_00100003_20181014"
"ib balance_00100002_20181014"
"ib balance_00100001_20181003"
"ib balance_00100001_20180923"
"ib balance_00100002_20180915"
"ib balance_00100003_20181009"
"ib balance_00100001_20181007"
"ib balance_00100003_20180903"
"ib balance_00100001_20181001"
"ib balance_00100002_20181015"
"ib balance_00100002_20181001"
"ib balance_00100003_20180906"
"ib balance_00100003_20180930"
"ib balance_00100001_20180901"
"ib balance_00100001_20181002"
"ib balance_00100001_20180907"
"ib balance_00100001_20181010"
"ib balance_00100002_20181008"
"ib balance_00100001_20180917"
"ib balance_00100003_20180911"
"ib balance_00100001_20180908"
"ib balance_00100002_20180903"
"ib balance_00100002_20180909"
"ib balance_00100002_20180923"
"ib balance_00100003_20180924"
"ib balance_00100001_20180903"
"ib balance_00100003_20181016"
"ib balance_00100002_20181018"
"ib balance_00100002_20180930"
"ib balance_00100001_20181016"
"ib balance_00100003_20181007"
"ib balance_00100003_20180914"
"ib balance_00100003_20180925"
"ib balance_00100002_20181011"
"ib balance_00100002_20180916"
"ib balance_00100001_20180913"
"ib balance_00100002_20181009"
"ib balance_00100002_20180902"
"ib balance_00100003_20181012"
"ib balance_00100001_20180910"
"ib balance_00100003_20181006"
"ib balance_00100001_20181009"
"ib balance_00100003_20181015"
"ib balance_00100002_20181002"
"ib balance_00100003_20181003"
"ib balance_00100002_20181017"
"ib balance_00100002_20180928"
"ib balance_00100002_20181016"
"ib balance_00100003_20180907"
"ib balance_00100003_20181013"
"ib balance_00100003_20180921"
"ib balance_00100003_20180908"
"ib balance_00100001_20180911"
"ib balance_00100003_20180915"
"ib balance_00100001_20181008"
"ib balance_00100002_20181003"
"ib balance_00100002_20181006"
"ib balance_00100003_20180928"
"ib balance_00100003_20180927"
"ib balance_00100002_20180908"
"ib balance_00100001_20180921"
"ib balance_00100001_20181015"
"ib balance_00100003_20181001"
"ib balance_00100002_20180918"
"ib balance_00100002_20180926"
"ib balance_00100001_20180925"
"ib balance_00100002_20180912"
"ib balance_00100002_20181010"
"ib balance_00100003_20180902"
"ib balance_00100002_20180927"
"ib balance_00100003_20181008"
"ib balance_00100001_20180918"
"ib balance_00100001_20180928"
"ib balance_00100001_20180930"
"ib balance_00100001_20180912"
"ib balance_00100001_20181012"
"ib balance_00100002_20180906"
"ib balance_00100002_20180929"
"ib balance_00100001_20181004"
"ib balance_00100002_20180917"
"ib balance_00100003_20181002"
"ib balance_00100001_20180902"
"ib balance_00100001_20180920"
"ib balance_00100003_20180917"
"ib balance_00100003_20180923"
"ib balance_00100003_20180910"
"ib balance_00100001_20180927"
"ib balance_00100003_20180913"
"ib balance_00100002_20180919"
"ib balance_00100002_20180905"
"ib balance_00100002_20180925"
"ib balance_00100001_20181005"
"ib balance_00100003_20180918"
"ib balance_00100001_20180914"
"ib balance_00100003_20180901"
"ib balance_00100003_20181005"
"ib balance_00100001_20181006"
"ib balance_00100003_20180912"
"ib balance_00100001_20181018"
"ib balance_00100001_20181011"
"ib balance_00100002_20181013"
"ib balance_00100003_20180905"
"ib balance_00100003_20180929"
"ib balance_00100002_20181004"
"ib balance_00100002_20180914"
"ib balance_00100002_20180920"
"ib balance_00100002_20180921"
"ib balance_00100003_20180926"
"ib balance_00100001_20180905"
"ib balance_00100001_20180919"
"ib balance_00100001_20181014"
"ib balance_00100003_20180904"
"otkritie balance_03934520_20181013"
"otkritie balance_03934520_20180924"
"otkritie balance_03934520_20180917"
"otkritie balance_03934520_20180906"
"otkritie balance_03934523_20180912"
"otkritie balance_03934520_20181002"
"otkritie balance_03934520_20180910"
"otkritie balance_03934523_20181002"
"otkritie balance_03934523_20180926"
"otkritie balance_03934520_20181005"
"otkritie balance_03934520_20180907"
"otkritie balance_03934523_20181012"
"otkritie balance_03934523_20180922"
"otkritie balance_03934523_20181007"
"otkritie balance_03934523_20180924"
"otkritie balance_03934520_20181003"
"otkritie balance_03934523_20180929"
"otkritie balance_03934520_20180918"
"otkritie balance_03934523_20181015"
"otkritie balance_03934520_20180927"
"otkritie balance_03934520_20181004"
"otkritie balance_03934523_20180905"
"otkritie balance_03934520_20180919"
"otkritie balance_03934520_20181007"
"otkritie balance_03934520_20180930"
"otkritie balance_03934520_20180928"
"otkritie balance_03934520_20180909"
"otkritie balance_03934520_20180903"
"otkritie balance_03934523_20180910"
"otkritie balance_03934523_20180906"
"otkritie balance_03934520_20181010"
"otkritie balance_03934520_20180914"
"otkritie balance_03934523_20180907"
"otkritie balance_03934523_20180921"
"otkritie balance_03934520_20181012"
"otkritie balance_03934523_20180909"
"otkritie balance_03934520_20181016"
"otkritie balance_03934520_20180902"
"otkritie balance_03934523_20180917"
"otkritie balance_03934520_20180929"
"otkritie balance_03934523_20181004"
"otkritie balance_03934520_20180920"
"otkritie balance_03934523_20180911"
"otkritie balance_03934523_20180902"
"otkritie balance_03934523_20181005"
"otkritie balance_03934520_20181001"
"otkritie balance_03934520_20180916"
"otkritie balance_03934520_20180922"
"otkritie balance_03934520_20180926"
"otkritie balance_03934523_20180908"
"otkritie balance_03934520_20181008"
"otkritie balance_03934523_20180914"
"otkritie balance_03934523_20180925"
"otkritie balance_03934523_20180913"
"otkritie balance_03934520_20181017"
"otkritie balance_03934523_20180930"
"otkritie balance_03934523_20180919"
"otkritie balance_03934523_20180901"
"otkritie balance_03934523_20180916"
"otkritie balance_03934520_20180925"
"otkritie balance_03934520_20181011"
"otkritie balance_03934523_20181011"
"otkritie balance_03934520_20180905"
"otkritie balance_03934523_20180915"
"otkritie balance_03934523_20181006"
"otkritie balance_03934523_20180903"
"otkritie balance_03934523_20181013"
"otkritie balance_03934523_20181009"
"otkritie balance_03934523_20181001"
"otkritie balance_03934523_20180927"
"otkritie balance_03934520_20181014"
"otkritie balance_03934523_20181017"
"otkritie balance_03934520_20181015"
"otkritie balance_03934520_20180908"
"otkritie balance_03934520_20181006"
"otkritie balance_03934523_20181003"
"otkritie balance_03934523_20181016"
"otkritie balance_03934523_20181008"
"otkritie balance_03934523_20180904"
"otkritie balance_03934523_20181010"
"otkritie balance_03934520_20180911"
"otkritie balance_03934520_20180915"
"otkritie balance_03934520_20180904"
"otkritie balance_03934520_20180923"
"otkritie balance_03934523_20180923"
"otkritie balance_03934523_20181014"
"otkritie balance_03934523_20180918"
"otkritie balance_03934523_20180928"
"otkritie balance_03934520_20180901"
"otkritie balance_03934523_20180920"
"otkritie balance_03934520_20180913"
"otkritie balance_03934520_20180921"
"otkritie balance_03934520_20180912"
"otkritie balance_03934520_20181018"
"otkritie balance_03934520_20181009"
"Broker:otkritie Account:03934523 Files:46 Last date:20181017"
"Broker:otkritie Account:03934520 Files:47 Last date:20181018"
"Broker:bcs Account:00143456 Files:45 Last date:20181016"
"Broker:bcs Account:00123456 Files:43 Last date:20181014"
"Broker:bcs Account:00122223 Files:45 Last date:20181016"
"Broker:bcs Account:00123458 Files:47 Last date:20181018"
"Broker:ib Account:00100002 Files:47 Last date:20181018"
"Broker:ib Account:00100001 Files:47 Last date:20181018"
"Broker:ib Account:00100003 Files:46 Last date:20181017";
    auto path_ftp = boost::filesystem::path{"./../misc/ftp"};
    myFPT(path_ftp.path());
    EXPECT_EQ(str, res.FTPresult());
}