#pragma once

struct FVector2D
{
	float X, Y;

	__forceinline FVector2D()
		: X(0), Y(0)
	{ }

	__forceinline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

    float Size();

	__forceinline FVector2D operator + (const FVector2D& other) const
	{
		return FVector2D(X + other.X, Y + other.Y);
	}

	__forceinline FVector2D operator - (const FVector2D& other) const
	{
		return FVector2D(X - other.X, Y - other.Y);
	}

	__forceinline FVector2D operator * (float scalar) const
	{
		return FVector2D(X * scalar, Y * scalar);
	}

	__forceinline FVector2D& operator=  (const FVector2D& other)
	{
		X  = other.X;
		Y  = other.Y;
		return *this;
	}

	__forceinline FVector2D& operator+= (const FVector2D& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	__forceinline FVector2D& operator-= (const FVector2D& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	__forceinline FVector2D& operator*= (const float other) {
		X *= other;
		Y *= other;
		return *this;
	}

	friend bool operator==(const FVector2D& one, const FVector2D& two) { return one.X == two.X && one.Y == two.Y; }

	friend bool operator!=(const FVector2D& one, const FVector2D& two) { return !(one == two); }

	friend bool operator>(const FVector2D& one, const FVector2D& two) { return one.X > two.X && one.Y > two.Y; }

	friend bool operator<(const FVector2D& one, const FVector2D& two) { return one.X < two.X&& one.Y < two.Y; }

};