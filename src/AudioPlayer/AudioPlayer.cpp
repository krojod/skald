#include "AudioPlayer.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;
void AudioPlayer::playSound(string path)
{
  auto systemCall = soundSystemCall + " " + path;
  system(systemCall.c_str());
}
