#ifndef H__FLOW
#define H__FLOW

  void setupFlow();
  int getPulse(uint8_t port);
  void resetFlow();
  void stopFlow();
  float getVolumeIn();
  float getVolumeOut();
  
#endif
