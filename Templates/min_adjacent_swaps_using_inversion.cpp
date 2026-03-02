class AdjacentSwapInversion {
public:
    // ---- Merge Sort Inversion Count ----
    long long mergeCount(vector<int>& a, int l, int r) {
        if (l >= r) return 0;

        int mid = (l + r) / 2;
        long long inv = 0;

        inv += mergeCount(a, l, mid);
        inv += mergeCount(a, mid + 1, r);

        vector<int> temp;
        int i = l, j = mid + 1;

        while (i <= mid && j <= r) {
            if (a[i] <= a[j]) {
                temp.push_back(a[i++]);
            } else {
                temp.push_back(a[j++]);
                inv += (mid - i + 1);
            }
        }

        while (i <= mid) temp.push_back(a[i++]);
        while (j <= r) temp.push_back(a[j++]);

        for (int k = l; k <= r; k++)
            a[k] = temp[k - l];

        return inv;
    }

    // ---- Main Function ----
    long long minAdjacentSwaps(vector<int>& arr, vector<int>& target) {
        int n = arr.size();

        // Map value -> queue of indices (handles duplicates)
        unordered_map<int, queue<int>> pos;
        for (int i = 0; i < n; i++) {
            pos[target[i]].push(i);
        }

        // Build mapped index array
        vector<int> mapped(n);
        for (int i = 0; i < n; i++) {
            if (pos[arr[i]].empty())
                return -1; // impossible case

            mapped[i] = pos[arr[i]].front();
            pos[arr[i]].pop();
        }

        // Count inversions
        return mergeCount(mapped, 0, n - 1);
    }
};