int number, i = 1, factorial = 1, sigma = 0, primes;
cin >> number;
if (number > 2) {                     // e1
  for (int j = 3; j <= number; j++) { // e2
    factorial = 1;                    // e3
    i = 1;                            // e4
    for (int x = 0; x < j - 2; x++) { // e5
      factorial = factorial * i;      // e6
      i++;                            // e7
    }
    sigma = sigma + (factorial - j * (factorial / j)); // e8
  }
  primes = -1 + sigma; // e9
  if (number == 3)     // e10
    cout << 2;         // e11
  else
    cout << primes; // e12
} else
  cout << "wrong number"; // e13