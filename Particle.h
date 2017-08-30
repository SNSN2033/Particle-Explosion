#pragma once
namespace shining{
	class Particle
	{
	private:
		double m_speed;
		double m_direction;
		void init();
	public:
		double m_x;
		double m_y;
		Particle();
		~Particle();
		void update(int interval);
	};
}
