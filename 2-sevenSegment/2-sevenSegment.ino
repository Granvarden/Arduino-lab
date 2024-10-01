int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9

// Define the pins for each segment of the 7-segment display
const int segment_a = 2; 
const int segment_b = 3; 
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;

// Define the pins for the common cathodes/anodes of the two digits
const int digit1 = 11;
const int digit2 = 12;

// Create an array of digit pairs to be displayed
int display_digits[4][2] = {
  {6, 6},  // 66
  {0, 7},  // 07
  {0, 2},  // 02
  {9, 1}   // 91
};

void setup() { 
  // Set pin modes for each segment
  pinMode(segment_a, OUTPUT);   
  pinMode(segment_b, OUTPUT);   
  pinMode(segment_c, OUTPUT);   
  pinMode(segment_d, OUTPUT);   
  pinMode(segment_e, OUTPUT);   
  pinMode(segment_f, OUTPUT);   
  pinMode(segment_g, OUTPUT);   

  // Set pin modes for the two digit control pins
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
}

void loop() {
  // Loop through the display_digits array and show each number pair for 1 second
  for (int i = 0; i < 4; i++) {
    int digitLeft = display_digits[i][0];  // Get the left digit of the current pair
    int digitRight = display_digits[i][1]; // Get the right digit of the current pair
    
    // Display the current digit pair for 1 second
    for (int t = 0; t < 1000; t += 10) {
      // Turn on the left digit (digit1) and display the left number (digitLeft)
      digitalWrite(digit1, HIGH);   // Enable the left digit
      digitalWrite(digit2, LOW);    // Disable the right digit
      displayDigit(digitLeft);      // Display the left digit
      delay(5);                     // Small delay to avoid flickering

      // Turn on the right digit (digit2) and display the right number (digitRight)
      digitalWrite(digit1, LOW);    // Disable the left digit
      digitalWrite(digit2, HIGH);   // Enable the right digit
      displayDigit(digitRight);     // Display the right digit
      delay(5);                     // Small delay to avoid flickering
    }
  }
}

// Function to display a specific digit on the 7-segment display
void displayDigit(int digit) {
  // Set each segment according to the num_array for the given digit
  digitalWrite(segment_a, num_array[digit][0]);
  digitalWrite(segment_b, num_array[digit][1]);
  digitalWrite(segment_c, num_array[digit][2]);
  digitalWrite(segment_d, num_array[digit][3]);
  digitalWrite(segment_e, num_array[digit][4]);
  digitalWrite(segment_f, num_array[digit][5]);
  digitalWrite(segment_g, num_array[digit][6]);
}
