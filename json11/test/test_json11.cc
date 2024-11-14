#include "gtest/gtest.h"
#include "json11/json11.h"

using json11::Json;

namespace json11 {
namespace test {

class Json11Test : public ::testing::Test {
 protected:
  void SetUp() override {}
  void TearDown() override {}
};

TEST_F(Json11Test, TestCoreMethod) {
  Json my_json = Json::object {
      { "key1", "value1" },
      { "key2", false },
      { "key3", Json::array { 1, 2, 3 } },
  };

  std::string json_obj_str = my_json.dump();
  std::string target_str =
      "{\"key1\": \"value1\", \"key2\": false, \"key3\": [1, 2, 3]}";

  EXPECT_EQ(json_obj_str, target_str);
  EXPECT_NE(json_obj_str, "abc");
}

}  // namespace test
}  // namespace json11
