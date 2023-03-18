
// Rule: 1

IF

freemem <= 193.5

freemem > 117.5

THEN

usr = 93

+ 0.0001 * outtime

- 0.0016 * intime

- 0.0019 * bytesize

+ 0.0022 * req

- 1.9716 * exec


// Rule: 2

IF

freemem > 304.5

fork <= 1.095

bytesize > 1626.5

THEN

usr = 88

+ 0.152 * intime

- 0.0009 * outime

- 3.0119 *req

- 0.0011 * exec

+ 0.31 * freeswap

