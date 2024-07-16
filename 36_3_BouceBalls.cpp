# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	Circle circle {100,100,30};
	Vec2 vec = RandomVec2();

	while (System::Update())
	{
		const double t = Scene::Time();
		circle.x += (10*vec.x*t);
		circle.y += (10*vec.y*t);
		circle.draw();

	}
}