// Title: Ubuntu fork bomb
// Author: Rennan Cockles

#include <Keyboard.h>

Keyboard kb;

void setup() {
    Serial.begin(9600);
    delay(2000);
}

void loop() {
    kb.ALT_F2();
    delay(500);
    kb.STRING("terminator");
    kb.ENTER();
    delay(2000);

    kb.STRING("wget https://i.ytimg.com/vi/8baANpiNae4/maxresdefault.jpg -O wall.jpg && gsettings set com.deepin.wrap.gnome.desktop.background picture-uri file://$HOME/wall.jpg");
    kb.ENTER();

    delay(300000);
}
