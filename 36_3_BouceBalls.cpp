# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	Circle circle {100,100,30};
	Vec2 vec = RandomVec2(200);

	while (System::Update())
	{
		const double t = Scene::DeltaTime();

		if (circle.x <= 30 || circle.x >= Scene::Width()-30)
		{
			vec.x *= -1.0;
		}
		circle.x += (vec.x*t);

		if (circle.y <= 30 || circle.y >= Scene::Height()-30)
		{
			vec.y *= -1.0;
		}
		circle.y += (vec.y*t);

		circle.draw();

	}
}