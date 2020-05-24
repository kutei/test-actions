/**
 * @file function.hpp
 * @brief 関数用ヘッダファイル
 */

/**
 * 演算linter用関数
 *
 * 以下の項目を記載している。
 *   - 各種演算記号のlinter確認用の構文
 *   - 各制御構文確認用の構文
 * @param[in] a 一応の制御構文引数
 * @return 何かしらの値
 * @sa funcion_b
 */
int function_a(int a);

/**
 * テンプレートvectorのlinter用関数
 *
 * 以下の項目を記載している。
 *   - テンプレート構文を記載
 * @param[in,out] start 一応の制御構文引数
 * @return 何かしらの値
 */
int function_b(int &start);

/**
 * classのlinter確認用
 *
 * 以下の項目を記載している。
 *   - class構文
 *   - namespace構文
 */
namespace testspace{
class TestClass{
    public:
    TestClass();
    int normal_function(int a);
    int inline_function(int a, int b){
        return a + b;
    }

    private:
    int prv_normal_function(int a);
    int prv_val;
};
} // endspace: testspace
