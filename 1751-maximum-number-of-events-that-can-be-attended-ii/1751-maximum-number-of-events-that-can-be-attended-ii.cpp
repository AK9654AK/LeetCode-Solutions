int buf0[1000005];
int buf1[1000005];

struct Event {
    int start;
    int end;
    int value;

    bool operator < (const Event & rhs) const { return this->start < rhs.start; }
};

Event event_buf[1000005];
int next_index[1000005];

int my_lower_bound(int l, int r, int val) {
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(event_buf[mid].start < val) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return l;
}

#define ROUND(b0, b1, i) { b0[i] = max(event_buf[i].value + b1[next_index[i]], b0[i + 1]); }
#define ROUND0(i) ROUND(buf0, buf1, i)
#define ROUND1(i) ROUND(buf1, buf0, i)

class Solution {
public:

    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        for(int i = 0; i < n; ++i) event_buf[i] = { events[i][0], events[i][1], events[i][2] };
        sort(event_buf, event_buf + n);

        // Pre-compute to avoid duplicate binary search computing.
        for(int i = 0; i < n; ++i) {
            next_index[i] = my_lower_bound(i + 1, n - 1, event_buf[i].end + 1);
            buf0[i] = 0;
        }

        buf0[n] = buf1[n] = 0;

        while(k >= 2) {
            k -= 2;

            for(int i = n - 1; i >= 0; --i) {
                ROUND1(i)
            }

            for(int i = n - 1; i >= 0; --i) {
                ROUND0(i)
            }
        }

        if (k > 0) {
            for(int i = n - 1; i >= 0; --i) {
                ROUND1(i)
            }

            return buf1[0];
        } else {
            return buf0[0];
        }
    }
};