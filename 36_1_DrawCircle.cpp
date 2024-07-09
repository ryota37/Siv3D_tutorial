// https://siv3d.github.io/ja-jp/tutorial2/interaction/
// Implemented 36.1 on my own, not an exact copy.
// Thus, its behavior might be slightly different from the original code on the web.

# include <Siv3D.hpp>

void Main()
{
    String password = U"";
    while (System::Update())
    {
        if (SimpleGUI::Button(U"Generate", Vec2{200,50})) {
            // ランダムな文字列を出す処理
            ClearPrint();
            password.clear();
            for (int32 i = 0; i < 15; ++i) {
                char32 charp = Random(U'!', U'z'); 
                password << charp;
            }
            Print << password;
            // スコープの範囲外にこのpasswordの値を持ってくことは可能？
        }

        if (SimpleGUI::Button(U"Copy to clipboard", Vec2{200,100})) {
            // クリップボードにコピーする処理
            Clipboard::SetText(password);
        }
    }
}
