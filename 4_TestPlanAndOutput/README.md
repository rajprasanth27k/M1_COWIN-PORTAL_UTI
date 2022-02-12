
# StepIN_VaccineRegist
## High Level Test Plan
| Test ID | Description | Aadhar no | Age | Phone n.o | vaccine Provider |  Expected output | Actual Output |
| --- | ------ | --- | --- | --- |----|--------|--------|
| 01 | New registration  |8021344 | 21 | 803456722 | Cipla | registered | registerd | 
| 02 | Existing  patient | 1234565 | -- | -- |--- | Not found | Not found| 
| 03 | Existing  patient | 2304895 | -- | -- |--- | Apollo | found | found | 

## Low Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | patient dose status | 8021344  | registered, not vaccinated | registered, not vaccinated |
| 02 | patient  dose status | 1234565  | registered, vaccinated| registered, vaccinated |
| 03 | patient  dose status  |  2302395 | 1st dose | 1st dose |
| 04 | patient  dose status  |  2304895 | 2nd dose | 2nd dose |

