#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void display(box x);
void set_volume(box *x);

int main() {
	box x = {
		"LEO",
		10,
		20,
		30,
		0
	};
	display(x);
	set_volume(&x);
	display(x);

	return 0;
}

void display(box x) {
	using std::cout;
	using std::endl;
	cout << "Maker: " << x.maker << endl;
	cout << "Height: " << x.height << endl;
	cout << "Width: " << x.width << endl;
	cout << "Length: " << x.length << endl;
	cout << "Volume: " << x.volume << endl;
}

void set_volume(box *x) {
	x->volume = x->height * x->width * x->length;
}
