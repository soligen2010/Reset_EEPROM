/*
 Copyright 2017 by Dennis Cabell
 KE8FZX
 
 This project is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Reset_EEPROM is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Reset_EEPROM.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#include <EEPROM.h>

void setup() {
  Serial.begin(74880);
  uint8_t value = 0xff;
  Serial.print("Overwriting flash with value ");Serial.println(value);
  for (int x = 0; x < 1024; x++) {
        EEPROM.put(x,value);
  }
  Serial.println("Done");
}

void loop() {
  // put your main code here, to run repeatedly:

}
