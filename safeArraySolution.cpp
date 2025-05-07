template <typename T>
class SafeArray {

	private:
		T *arr;
		int size;

	public:

		SafeArray(int size_in): size(size_in) {
			arr = new T[size];
		}

		T& operator[](int idx) {
		
			if(idx >= size || idx < 0) {
				throw OutOfBounds();
			}
			return arr[idx];
		
		}
};