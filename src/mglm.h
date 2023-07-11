
#ifndef MICROGLM_H
#define MICROGLM_H

#include "inttypes.h"

namespace mglm {

	struct vec2;
	struct ivec2;
	struct vec3;
	struct ivec3;

	struct vec2 {
		float x = 0, y = 0;

		vec2() : x(0), y(0) {}
		vec2(float x, float y) : x(x), y(y) {}

		vec2 operator+(const vec2& v) const { return vec2(x + v.x, y + v.y); };
		vec2 operator-(const vec2& v) const { return vec2(x - v.x, y - v.y); };
		vec2 operator*(const vec2& v) const { return vec2(x * v.x, y * v.y); };
		vec2 operator/(const vec2& v) const { return vec2(x / v.x, y / v.y); };
		vec2 operator*(float v) const { return vec2(x * v, y * v); };
		vec2 operator/(float v) const { return vec2(x / v, y / v); };
		vec2 operator-() const { return vec2(-x, -y); };

		void operator+=(const vec2& v) { x += v.x; y += v.y; };
		void operator-=(const vec2& v) { x -= v.x; y -= v.y; };
		void operator*=(const vec2& v) { x *= v.x; y *= v.y; };
		void operator/=(const vec2& v) { x /= v.x; y /= v.y; };
		void operator*=(float v) { x *= v; y *= v; };
		void operator/=(float v) { x /= v; y /= v; };

		bool operator==(const vec2& v) const { return x == v.x && y == v.y; };
		bool operator!=(const vec2& v) const { return x != v.x || y != v.y; };

		explicit operator ivec2();
	};
	vec2 operator*(float n, const vec2& v);
	vec2 operator/(float n, const vec2& v);

	struct ivec2 {
		int32_t x = 0, y = 0;

		ivec2() : x(0), y(0) {}
		ivec2(float x, float y) : x(x), y(y) {}

		ivec2 operator+(const ivec2& v) const { return ivec2(x + v.x, y + v.y); };
		ivec2 operator-(const ivec2& v) const { return ivec2(x - v.x, y - v.y); };
		ivec2 operator*(const ivec2& v) const { return ivec2(x * v.x, y * v.y); };
		ivec2 operator/(const ivec2& v) const { return ivec2(x / v.x, y / v.y); };
		ivec2 operator*(float v) const { return ivec2(x * v, y * v); };
		ivec2 operator/(float v) const { return ivec2(x / v, y / v); };
		ivec2 operator-() const { return ivec2(-x, -y); };

		void operator+=(const ivec2& v) { x += v.x; y += v.y; };
		void operator-=(const ivec2& v) { x -= v.x; y -= v.y; };
		void operator*=(const ivec2& v) { x *= v.x; y *= v.y; };
		void operator/=(const ivec2& v) { x /= v.x; y /= v.y; };
		void operator*=(float v) { x *= v; y *= v; };
		void operator/=(float v) { x /= v; y /= v; };

		bool operator==(const ivec2& v) const { return x == v.x && y == v.y; };
		bool operator!=(const ivec2& v) const { return x != v.x || y != v.y; };

		explicit operator vec2();
	};
	ivec2 operator*(float n, const ivec2& v);
	ivec2 operator/(float n, const ivec2& v);

	struct vec3 {
		float x = 0, y = 0, z = 0;

		vec3() : x(0), y(0), z(0) {}
		vec3(float x, float y, float z) : x(x), y(y), z(z) {}

		vec3 operator+(const vec3& v) const { return vec3(x + v.x, y + v.y, z + v.z); };
		vec3 operator-(const vec3& v) const { return vec3(x - v.x, y - v.y, z - v.z); };
		vec3 operator*(const vec3& v) const { return vec3(x * v.x, y * v.y, z * v.z); };
		vec3 operator/(const vec3& v) const { return vec3(x / v.x, y / v.y, z / v.z); };
		vec3 operator*(float v) const { return vec3(x * v, y * v, z * v); };
		vec3 operator/(float v) const { return vec3(x / v, y / v, z / v); };
		vec3 operator-() const { return vec3(-x, -y, -z); };

		void operator+=(const vec3& v) { x += v.x; y += v.y; z += v.z; };
		void operator-=(const vec3& v) { x -= v.x; y -= v.y; z -= v.z; };
		void operator*=(const vec3& v) { x *= v.x; y *= v.y; z *= v.z; };
		void operator/=(const vec3& v) { x /= v.x; y /= v.y; z /= v.z; };
		void operator*=(float v) { x *= v; y *= v; z *= v; };
		void operator/=(float v) { x /= v; y /= v; z /= v; };

		bool operator==(const vec3& v) const { return x == v.x && y == v.y && z == v.z; };
		bool operator!=(const vec3& v) const { return x != v.x || y != v.y || z != v.z; };

		explicit operator ivec3();
	};
	vec3 operator*(float n, const vec3& v);
	vec3 operator/(float n, const vec3& v);

	struct ivec3 {
		int32_t x = 0, y = 0, z = 0;

		ivec3() : x(0), y(0), z(0) {}
		ivec3(int32_t x, int32_t y, int32_t z) : x(x), y(y), z(z) {}

		ivec3 operator+(const ivec3& v) const { return ivec3(x + v.x, y + v.y, z + v.z); };
		ivec3 operator-(const ivec3& v) const { return ivec3(x - v.x, y - v.y, z - v.z); };
		ivec3 operator*(const ivec3& v) const { return ivec3(x * v.x, y * v.y, z * v.z); };
		ivec3 operator/(const ivec3& v) const { return ivec3(x / v.x, y / v.y, z / v.z); };
		ivec3 operator*(int32_t v) const { return ivec3(x * v, y * v, z * v); };
		ivec3 operator/(int32_t v) const { return ivec3(x / v, y / v, z / v); };
		ivec3 operator-() const { return ivec3(-x, -y, -z); };

		void operator+=(const ivec3& v) { x += v.x; y += v.y; z += v.z; };
		void operator-=(const ivec3& v) { x -= v.x; y -= v.y; z -= v.z; };
		void operator*=(const ivec3& v) { x *= v.x; y *= v.y; z *= v.z; };
		void operator/=(const ivec3& v) { x /= v.x; y /= v.y; z /= v.z; };
		void operator*=(int32_t v) { x *= v; y *= v; z *= v; };
		void operator/=(int32_t v) { x /= v; y /= v; z /= v; };

		bool operator==(const ivec3& v) const { return x == v.x && y == v.y && z == v.z; };
		bool operator!=(const ivec3& v) const { return x != v.x || y != v.y || z != v.z; };

		explicit operator vec3();
	};
	ivec3 operator*(float n, const ivec3& v);
	ivec3 operator/(float n, const ivec3& v);

	float length(const vec2& v);
	float length(const ivec2& v);
	float length(const vec3& v);
	float length(const ivec3& v);

	template <typename T>
	T normalize(const T& v) {
		return v / mglm::length(v);
	}

	float distance(const vec2& p1, const vec2& p2);
	float distance(const ivec2& p1, const ivec2& p2);
	float distance(const vec3& p1, const vec3& p2);
	float distance(const ivec3& p1, const ivec3& p2);

	float dot(const vec2& v1, const vec2& v2);
	float dot(const vec3& v1, const vec3& v2);





	struct mat3 {
		float values[3][3];

		mat3(const vec3& v1, const vec3& v2, const vec3& v3) {
			values[0][0] = v1.x;
			values[0][1] = v1.y;
			values[0][2] = v1.z;
			values[1][0] = v2.x;
			values[1][1] = v2.y;
			values[1][2] = v2.z;
			values[2][0] = v3.x;
			values[2][1] = v3.y;
			values[2][2] = v3.z;
		}

		void fill(float value) {
			for (uint8_t i = 0; i < 3; i++) {
				for (uint8_t j = 0; j < 3; j++) {
					values[i][j] = value;
				}
			}
		}

		// Matrix vector multiplication
		vec3 operator*(const vec3& v) {
			vec3 result;
			result.x = values[0][0] * v.x + values[1][0] * v.y + values[2][0] * v.z;
			result.y = values[0][1] * v.x + values[1][1] * v.y + values[2][1] * v.z;
			result.z = values[0][2] * v.x + values[1][2] * v.y + values[2][2] * v.z;
			return result;
		}
	};

}

bool isnan(const mglm::vec2& v);
bool isnan(const mglm::ivec2& v);
bool isnan(const mglm::vec3& v);
bool isnan(const mglm::ivec3& v);

#endif // MICROGLM_H