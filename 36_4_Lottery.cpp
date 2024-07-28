# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(Palette::Mediumseagreen);

    while(System::Update())
    {
        // ランダムに行き先を表示するアプリだと思われる
        // Parisのような都市名を白いボックス内に表示する
            // (Copilotが出してくれた都市名セット) Paris, New York, Tokyo, London, Sydney, Rome, Seoul, Beijing, Moscow, Cairo
        // Stopというボタンもあるので、それを押すと止まる？

        SimpleGUI::Button(U"Stop", Vec2(300, 300));
    }
}