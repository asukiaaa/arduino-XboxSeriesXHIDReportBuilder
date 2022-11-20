#include <XboxSeriesXHIDReportBuilder_asukiaaa.hpp>

void setup() { Serial.begin(115200); }

void loop() {
  XboxSeriesXHIDReportBuilder_asukiaaa::ReportBase info;
  Serial.println("build values for vivration");
  Serial.println("default value is 1 seconds full power");
  Serial.println();
  for (size_t i = 0; i < info.arr8tLen; ++i) {
    Serial.print(info.arr8t[i]);
    Serial.print("\t");
  }
  Serial.println();
  Serial.println("should be\n15\t100\t100\t100\t100\t100\t0\t0");
  Serial.println("at " + String(millis()));
  delay(3000);
}
