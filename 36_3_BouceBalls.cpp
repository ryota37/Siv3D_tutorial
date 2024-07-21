# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	Circle circle {100,100,30};
	Vec2 vec = RandomVec2()*1000;

	while (System::Update())
	{
		const double t = Scene::DeltaTime();

		if (circle.x < 50 || circle.x > 750)
		{
			vec.x *= -1;
		} else {
			vec.x = vec.x;
		}
		circle.x += (vec.x*t);

		if (circle.y < 50 || circle.y > 550)
		{
			vec.y *= -1;
		} else {
			vec.y = vec.y;
		}
		circle.y += (vec.y*t);

		circle.draw();

	}
}