// Fill out your copyright notice in the Description page of Project Settings.

#define WIN32_LEAN_AND_MEAN
#include "Timer.h"
#include <Runtime\AVEncoder\Private\Microsoft\Windows\ThirdParty\AmdAmf\core\Variant.h>
	
static int minutes = 10;
static int seconds = 0;
static bool gOver = false;

int UTimer::getMinutes()
{

	return minutes;
}

void UTimer::startCountdown()
{
	if (minutes == 0 && seconds == 0) {
		gOver = true;
	}

	if(seconds !=0) {
		seconds--;
	}

	if (seconds ==0 && minutes !=0) {
		seconds = 59;
		minutes--;		
	}
}


int UTimer::getSeconds()
{
	return seconds;
}


bool UTimer::gameOver()
{
	return gOver;
}

void UTimer::reset()
{
	seconds = 00;
	minutes = 10;
	gOver = false;
}
