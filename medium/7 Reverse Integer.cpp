 int reverse(int x) {
        long long result = 0;
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        // Check for overflow and underflow
        if (result > INT_MAX || result < INT_MIN) return 0;
        return static_cast<int>(result);
    }
