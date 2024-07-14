# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::White);

	Grid<Rect> squares(8,6,{0,0,100});
	Grid<int> colors(8,6,0);

	while (System::Update())
	{

		for (int i=0; i<8; i++) {
			for (int j=0; j<6; j++) {

				if(squares[j][i].leftClicked()){
					colors[j][i]++ ;
				}
				Color color = Palette::White;
				if (colors[j][i]%4 == 1) {
					color = Palette::Lightgray;
				} else if (colors[j][i]%4 == 2) {
					color = Palette::Dimgray;
				} else if (colors[j][i]%4 == 3) {
					color = Palette::Black;
				} 
				squares[j][i] = Rect{i*100,j*100,100}.draw(color);				
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
