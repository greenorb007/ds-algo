#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll
ll MaxPairwiseProduct(const std::vector<ll>& numbers) {
    ll max_product = 0;
    ll n = numbers.size();

    for (ll first = 0; first < n; ++first) {
        for (ll second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

ll main() {
    ll n;
    std::cin >> n;
    std::vector<ll> numbers(n);
    for (ll i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers); << "\n";
    return 0;
}
