#ifndef VECTOR2D
#define VECTOR2D

struct Vector2D
{
	float x = 0;
	float y = 0;

	Vector2D() : x(0), y(0) {}
	Vector2D(float x, float y) : x(x), y(y) {}

	Vector2D operator=(const float& other) const
	{
		return Vector2D(x + other, y + other);
	}

	Vector2D operator+(const Vector2D& other) const
	{
		return Vector2D(x + other.x, y + other.y);
	}
	Vector2D operator+=(const Vector2D& other)
	{
		x += other.x;
		y += other.y;

		return *this;
	}
	Vector2D operator+=(const float& other)
	{
		x += other;
		y += other;

		return *this;
	}

	Vector2D operator-(const Vector2D& other) const
	{
		return Vector2D(x - other.x, y - other.y);
	}
	Vector2D operator-=(const Vector2D& other)
	{
		x += other.x;
		y += other.y;

		return *this;
	}

	Vector2D operator*(const Vector2D& other) const
	{
		return Vector2D(x * other.x, y * other.y);
	}
	Vector2D operator*=(const Vector2D& other)
	{
		x *= other.x;
		y *= other.y;

		return *this;
	}

	Vector2D operator/(const Vector2D& other) const
	{
		return Vector2D(x / other.x, y / other.y);
	}
	Vector2D operator/=(const Vector2D& other)
	{
		x /= other.x;
		y /= other.y;

		return *this;
	}

	Vector2D operator*(float scalar) const
	{
		return Vector2D(x * scalar, y * scalar);
	}
	Vector2D operator*=(float scalar)
	{
		x *= scalar;
		y *= scalar;

		return *this;
	}

	Vector2D operator/(float scalar) const
	{
		return Vector2D(x / scalar, y / scalar);
	}
	Vector2D operator/=(float scalar)
	{
		x /= scalar;
		y /= scalar;

		return *this;
	}

	bool operator==(const Vector2D& other)
	{
		return (x == other.x && y == other.y);
	}
	bool operator!=(const Vector2D& other)
	{
		return (x != other.x && y != other.y);
	}
};

#endif // !VECTOR2D
