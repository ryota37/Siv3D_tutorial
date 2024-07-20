# include <Siv3D.hpp>

void Main()
{
	Scene::SetBackground(Palette::Mediumseagreen);
	Circle circle {100,100,30};
	Vec2 vec = RandomVec2();

	while (System::Update())
	{
		const double t = Scene::Time();

		if (circle.x < 0 || circle.x > 800)
		{
			vec.x *= -1;
		} else {
			vec.x = vec.x;
		}
		circle.x += (10*vec.x*t);

		if (circle.y < 0 || circle.y > 600)
		{
			vec.y *= -1;
		} else {
			vec.y = vec.y;
		}
		circle.y += (10*vec.y*t);

		// 壁に当たった時、反射する実装
		// ぶつかった方向の速度をマイナスにする
		// 例えば、右の壁にぶつかったら、x方向の速度をマイナスにする
		// 線分(or極細の長方形)と円の接触判定を見て、左右の壁の場合x方向を、上下の壁の場合y方向をマイナスにする
		// もしくは、circle.xが0か800になったらvec.xをマイナスにする実装にする
		// 0~800ではなく、円の半径を考慮して、0+半径~800-半径にしてもいいかも


		circle.draw();

	}
}