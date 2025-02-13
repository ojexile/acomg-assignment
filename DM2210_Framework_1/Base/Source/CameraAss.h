#pragma once
#ifndef CAMERA_A_H
#define CAMERA_A_H

#include "Camera.h"

class CameraAssignment : public Camera
{
public:
	//Vector3 position;
	//Vector3 target;
	//Vector3 up;

	Vector3 defaultPosition;
	Vector3 defaultTarget;
	Vector3 defaultUp;

	CameraAssignment();
	~CameraAssignment();
	virtual void Init(const Vector3& pos, const Vector3& target, const Vector3& up);
	virtual void Update(double dt);
	virtual void Reset();
	void SetCameraY(float, double);
};
#endif