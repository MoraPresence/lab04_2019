// Copyright 2018 Your Name <your_email>
#include <gtest/gtest.h>
#include <header.hpp>

TEST(Example, EmptyTest) {
auto path_ftp = boost::filesystem::path{"./../misc/ftp"};
myFPT result(path_ftp);
result.result();
EXPECT_TRUE(true);
}

int main(int argc, char **argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}
