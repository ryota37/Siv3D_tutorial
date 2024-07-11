# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	Array<Rect> squares;

	while (System::Update())
	{

		for (int i=0; i<8; i++) {
			for (int j=0; j<6; j++) {
				squares << Rect{i*100,j*100,100}.draw(Palette::White);
			}
		}

		for (const auto& square : squares) {
			if(square.leftClicked()){
				square.draw(Palette::Black);
			}
		}

		for (int i=0; i<8; i++) {
			Line{i*100,0,i*100,600}.draw(2, Palette::Skyblue);
		}
		for (int i=0; i<6; i++) {
			Line{0,i*100,800,i*100}.draw(2, Palette::Skyblue);
		}
		
	}
}
