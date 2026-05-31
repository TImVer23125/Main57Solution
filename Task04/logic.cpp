//O(N)
int largest_square_iterative(int length, int width) {
	if (length <= 0 || width <= 0) {
		return -1;
	}
	while (length != width) {
		if (length > width) {
			length -= width;
		}
		else {
			width -= length;
		}
	}
	return length;
}
//O(N)
int largest_square_recursive(int length, int width) {
	if (length <= 0 || width <= 0) {
		return -1;
	}
	if (length == width) {
		return length;
	}
	if (length > width) {
		return largest_square_recursive(length - width, width);
	}
	else {
		return largest_square_recursive(length, width - length);
	}
}