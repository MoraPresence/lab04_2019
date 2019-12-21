// Copyright 2018 Your Name <your_email>
#include <gtest/gtest.h>
#include <header.hpp>

TEST(Example, EmptyTest) {
auto current_path_ftp = boost::filesystem::current_path();
std::string path_ftp = current_path_ftp.string() + "misc/ftp";
current_path_ftp = boost::filesystem::path{path_ftp};
myFPT result(current_path_ftp);
result.result();
EXPECT_TRUE(true);
}

int main(int argc, char **argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}