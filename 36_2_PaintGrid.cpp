# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	// ここを Array<std::pair<Rect, Color>> squares; にすれば、色を後から変更できる？
	Array<Rect> squares;
	Grid<int> colors(8,6,0);

	while (System::Update())
	{

		for (int i=0; i<8; i++) {
			for (int j=0; j<6; j++) {
				if (colors[j][i]==0) {
					Color color = Palette::White;
				} else if (colors[j][i]==1) {
					Color color = Palette::Lightgray;
				} else if (colors[j][i]==2) {
					Color color = Palette::Dimgray;
				} else if (colors[j][i]==3) {
					Color color = Palette::Black;
				} 
				squares << Rect{i*100,j*100,100}.draw(color);				
			}
		}

		for (const auto& square : squares) {
			if(square.leftClicked()){
				// squareがsquaresの中でどの座標のものなのかを知る必要がある
				colors[j][i]++ ;	
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
