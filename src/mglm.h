/*
 Name:		mglm.h
 Created:	6/7/2021 12:12:34 PM
 Author:	HerrNamenlos123
 Editor:	http://www.visualmicro.com
*/

#ifndef _mglm_h
#define _mglm_h

#include "inttypes.h"

namespace mglm {

	struct vec3;
	struct ivec3;

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

		void operator+=(const vec3& v) { x += v.x; y += v.y; z += v.z; };
		void operator-=(const vec3& v) { x -= v.x; y -= v.y; z -= v.z; };
		void operator*=(const vec3& v) { x *= v.x; y *= v.y; z *= v.z; };
		void operator/=(const vec3& v) { x /= v.x; y /= v.y; z /= v.z; };
		void operator*=(float v) { x *= v, y *= v, z *= v; };
		void operator/=(float v) { x /= v, y /= v, z /= v; };

		bool operator==(const vec3& v) const { return x == v.x && y == v.y && z == v.z; };
		bool operator!=(const vec3& v) const { return x != v.x || y != v.y || z != v.z; };

		explicit operator ivec3();
	};

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

		void operator+=(const ivec3& v) { x += v.x; y += v.y; z += v.z; };
		void operator-=(const ivec3& v) { x -= v.x; y -= v.y; z -= v.z; };
		void operator*=(const ivec3& v) { x *= v.x; y *= v.y; z *= v.z; };
		void operator/=(const ivec3& v) { x /= v.x; y /= v.y; z /= v.z; };
		void operator*=(int32_t v) { x *= v, y *= v, z *= v; };
		void operator/=(int32_t v) { x /= v, y /= v, z /= v; };

		bool operator==(const ivec3& v) const { return x == v.x && y == v.y && z == v.z; };
		bool operator!=(const ivec3& v) const { return x != v.x || y != v.y || z != v.z; };

		explicit operator vec3();
	};

	vec3 normalize(const vec3& v);
	ivec3 normalize(const ivec3& v);
	float length(const vec3& v);
	float length(const ivec3& v);

}

#endif

