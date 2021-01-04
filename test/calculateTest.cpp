#include <gtest/gtest.h>
#include "../src/calculate/calculate.hpp"

// テスト対象となるクラス Foo のためのフィクスチャ
class CalculateTest : public ::testing::Test {
 protected:
  // 以降の関数で中身のないものは自由に削除できます．
  //
  Calculate* Calc;

  CalculateTest() {
    // テスト毎に実行される set-up をここに書きます．
  }

  virtual ~CalculateTest() {
    // テスト毎に実行される，例外を投げない clean-up をここに書きます．
  }

  // コンストラクタとデストラクタでは不十分な場合．
  // 以下のメソッドを定義することができます：
  virtual void SetUp() {
    // このコードは，コンストラクタの直後（各テストの直前）
    // に呼び出されます．
        const double a = 1.0;
        const double b = 2.0;
        Calc = new Calculate(a, b);
  }

  virtual void TearDown() {
    // このコードは，各テストの直後（デストラクタの直前）
    // に呼び出されます．
    delete Calc;
  }
};

// 成功することを想定したテスト
TEST_F(CalculateTest, SumTest1) {
    ASSERT_EQ(3, Calc->Sum(1, 2));
}

// 失敗するテスト
TEST_F(CalculateTest, SumTest2) {
    ASSERT_EQ(4, Calc->Sum(1, 2));
}

// 失敗することを想定したテスト
TEST_F(CalculateTest, SumTest3) {
    ASSERT_NE(3, Calc->Sum(3, 2));
}

// 成功することを想定したテスト
TEST(SampleTest, SampleTest1) {
    ASSERT_EQ(1, 1);
}

// 失敗することを想定したテスト
TEST(SampleTest, SampleTest2) {
    ASSERT_NE(1, 2);
}
