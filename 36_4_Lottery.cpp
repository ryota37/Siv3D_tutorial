# include <Siv3D.hpp>

void Main()
{
    Scene::SetBackground(Palette::Mediumseagreen);

    String destination = U"Paris";
    const Array<String> destinations = 
    {
        U"Paris", U"New York", U"Tokyo", U"London", U"Sydney", U"Rome", U"Seoul", U"Beijing", U"Moscow", U"Cairo"
    };

    while(System::Update())
    {
        // ランダムに行き先を表示するアプリだと思われる
        // Parisのような都市名を白いボックス内に表示する
            // (Copilotが出してくれた都市名セット) Paris, New York, Tokyo, London, Sydney, Rome, Seoul, Beijing, Moscow, Cairo
        // Stopというボタンもあるので、それを押すと止まる？

        destination = destinations.choice();

        SimpleGUI::Button(destination, Vec2{400,200});
        SimpleGUI::Button(U"Stop", Vec2(400, 400));
    }
}