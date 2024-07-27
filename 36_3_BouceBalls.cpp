# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	struct Ball {
		Vec2 position;
		Vec2 speed;
	};

	const double radius = 30.0;

	Array<Ball> balls;

	for (int i=0; i<5; i++) {
		balls << Ball{Vec2{100,100}, RandomVec2(200)};
	}

	while (System::Update())
	{
		const double t = Scene::DeltaTime();

		for (auto& ball : balls) {
			if (ball.position.x <= 30 || ball.position.x >= Scene::Width()-30)
			{
				ball.speed.x *= -1.0;
			}
			ball.position.x += (ball.speed.x*t);

			if (ball.position.y <= 30 || ball.position.y >= Scene::Height()-30)
			{
				ball.speed.y *= -1.0;
			}
			ball.position.y += (ball.speed.y*t);
		}

		for (const auto& ball : balls) {
			Circle{ ball.position, radius }.draw();
		}
	}
}