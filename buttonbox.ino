#include <Bounce.h>
Bounce b0 = Bounce(0, 10);
Bounce b1 = Bounce(1, 10);
Bounce b2 = Bounce(2, 10);
Bounce b3 = Bounce(3, 10);
Bounce b4 = Bounce(4, 10);
Bounce b5 = Bounce(5, 10);
Bounce b6 = Bounce(6, 10);
Bounce b7 = Bounce(7, 10);
Bounce b8 = Bounce(8, 10);
Bounce b9 = Bounce(9, 10);
Bounce b16 = Bounce(16, 10);
Bounce b17 = Bounce(17, 10);
Bounce b18 = Bounce(18, 10);
Bounce b19 = Bounce(19, 10);
Bounce b20 = Bounce(20, 10);
Bounce b21 = Bounce(21, 10);
Bounce b22 = Bounce(22, 10);
Bounce b23 = Bounce(23, 10);
int led = 13;
int numpresets = 5;
int curpreset = 0;
int presetchanged = 0;
void setup() {
	pinMode(0, INPUT_PULLUP);
	pinMode(1, INPUT_PULLUP);
	pinMode(2, INPUT_PULLUP);
	pinMode(3, INPUT_PULLUP);
	pinMode(4, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(7, INPUT_PULLUP);
	pinMode(8, INPUT_PULLUP);
	pinMode(9, INPUT_PULLUP);
	pinMode(16, INPUT_PULLUP);
	pinMode(17, INPUT_PULLUP);
	pinMode(18, INPUT_PULLUP);
	pinMode(19, INPUT_PULLUP);
	pinMode(20, INPUT_PULLUP);
	pinMode(21, INPUT_PULLUP);
	pinMode(22, INPUT_PULLUP);
	pinMode(23, INPUT_PULLUP);
	pinMode(13, OUTPUT);
}
void loop() {
	b0.update();
	b1.update();
	b2.update();
	b3.update();
	b4.update();
	b5.update();
	b6.update();
	b7.update();
	b8.update();
	b9.update();
	b16.update();
	b17.update();
	b18.update();
	b19.update();
	b20.update();
	b21.update();
	b22.update();
	b23.update();
	if (presetchanged == 1) {
		presetchanged = 0;
		for (int iter = 0; iter < curpreset; iter++) {
			digitalWrite(led, HIGH);
			delay(100);
			digitalWrite(led, LOW);
			delay(150);
		}
	}
	if (b0.fallingEdge()) {}
	if (b1.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_ALT);
			Keyboard.set_key1(KEY_DELETE);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_L);
			Keyboard.set_key2(KEY_M);
			Keyboard.set_key3(KEY_B);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b2.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_A);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_Y);
			Keyboard.set_key2(KEY_N);
			Keyboard.set_key3(KEY_I);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b3.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_C);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_J);
			Keyboard.set_key2(KEY_B);
			Keyboard.set_key3(KEY_Y);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b4.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_X);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_K);
			Keyboard.set_key2(KEY_V);
			Keyboard.set_key3(KEY_L);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b5.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_V);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_N);
			Keyboard.set_key2(KEY_Y);
			Keyboard.set_key3(KEY_O);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b6.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_Y);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_Y);
			Keyboard.set_key2(KEY_L);
			Keyboard.set_key3(KEY_J);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b7.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_Z);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_O);
			Keyboard.set_key2(KEY_Y);
			Keyboard.set_key3(KEY_J);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b8.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_S);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_J);
			Keyboard.set_key2(KEY_P);
			Keyboard.set_key3(KEY_L);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b9.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
			Keyboard.set_key1(KEY_ESC);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_H);
			Keyboard.set_key2(KEY_M);
			Keyboard.set_key3(KEY_Y);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b16.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_ESC);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_B);
			Keyboard.set_key2(KEY_P);
			Keyboard.set_key3(KEY_J);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b17.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_N);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_O);
			Keyboard.set_key2(KEY_J);
			Keyboard.set_key3(KEY_K);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b18.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_W);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_P);
			Keyboard.set_key2(KEY_L);
			Keyboard.set_key3(KEY_N);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b19.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_TAB);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_P);
			Keyboard.set_key2(KEY_B);
			Keyboard.set_key3(KEY_N);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b20.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_P);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_U);
			Keyboard.set_key2(KEY_N);
			Keyboard.set_key3(KEY_O);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b21.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_F4);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_J);
			Keyboard.set_key2(KEY_K);
			Keyboard.set_key3(KEY_N);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b22.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_F5);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_N);
			Keyboard.set_key2(KEY_P);
			Keyboard.set_key3(KEY_O);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b23.fallingEdge()) {
		if (curpreset == 1) {
			Keyboard.set_modifier(MODIFIERKEY_CTRL);
			Keyboard.set_key1(KEY_O);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 2) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(KEY_P);
			Keyboard.set_key2(KEY_L);
			Keyboard.set_key3(KEY_O);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 3) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 4) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
		if (curpreset == 5) {
			Keyboard.set_modifier(0);
			Keyboard.set_key1(0);
			Keyboard.set_key2(0);
			Keyboard.set_key3(0);
			Keyboard.set_key4(0);
			Keyboard.set_key5(0);
			Keyboard.set_key6(0);
			Keyboard.send_now();
		}
	}
	if (b0.risingEdge()) {
		curpreset = curpreset + 1;
		if (curpreset > numpresets) { curpreset = 1; }
		presetchanged = 1;
	}
	if (b1.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b2.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b3.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b4.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b5.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b6.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b7.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b8.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b9.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b16.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b17.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b18.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b19.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b20.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b21.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b22.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
	if (b23.risingEdge()) {
		Keyboard.set_modifier(0);
		Keyboard.set_key1(0);
		Keyboard.set_key2(0);
		Keyboard.set_key3(0);
		Keyboard.set_key4(0);
		Keyboard.set_key5(0);
		Keyboard.set_key6(0);
		Keyboard.send_now();
	}
}