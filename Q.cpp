//
// Created by danai on 9/20/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

void Q::user_input() {
	cout << "введите размер массива : ";
	cin >> n;
	while(n <= 0) {
	    cout << "введите положительное число : ";
	    cin >> n;
	}
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
}

int Q::search(int *aa) {
	int ans = 0, k, l;
	cout << "введите число K : ";
    cin >> k;
    while(k <= 0) {
        cout << "введите положительное число : ";
        cin >> k;
    }
    cout << "введите число L : ";
    cin >> l;
    while(l < k) {
        cout << "введите положительное число : ";
        cin >> l;
    }
    for(int i = 0; i < k; i++) {
        ans += a[i];
        if (i != 0) {
            *aa *= i;
        }
        //cout << ans << " ";

    }
    //cout << "| ";
    for(int i = l+1; i < n; i++) {
        ans += a[i];
        *aa *= i;
        //cout << ans << " ";
    }
    //cout << "\n" << ans << "\n";
	return ans;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}
