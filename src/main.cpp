#include "AudioPlayer/AudioPlayer.hpp"

int main()
{
  auto player = AudioPlayer();
  player.playSound("/home/jonas/data/Projects/skald/data/test.wav");
  return 0;
}