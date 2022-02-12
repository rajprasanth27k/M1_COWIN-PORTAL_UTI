# Description
   our project vaccine COWIN portal that handles all the registration form for vaccination. The data contains the persons status of vaccine availability. Previously (short-1) vaccination data was very difficult maintain, so there was a need for software that can handle all the vaccination data. Our Government of India is trying to preventing the spread of the virus. At present, the priority is to make  covid-19 vaccine available to all, ensuring vaccine traceability and beneficiary tracking from portal. Co-win form is the digital registration form for the vaccination drive in India. With scaling up of vaccination, the number of vaccination facilities and managed effectively. It has option to register and schedule the vaccination session online in Centers of their choice. The Citizen can register them self-module with phone, Aadhar number for who eligible for vaccines. using Co-WIN application, we can download the vaccination certificates. 
# Requirements
## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 | System should be able to access pre loaded registration data for verification | Implemented |
| HR02 | User should be able to add new registrations | Implemented |
| HR03 | System should recognize vaccinated patients | Implemented |
| HR04 | OTP generated verification for secure registration | Future |
| HR05 | System should recognize invalid credentials | Future |
| HR06 | System should be updated with the time interval between two doses | Future |

## Low Level Requirement
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| LR01 | Only new user must be given an option to select vaccine type | Implemented |
| LR02 | Total quantity of vaccines used must be shown by EOD | Implemented |
| LR03 | Full list of patients vaccinated must be set as output | Implemented |
| LR04 | Remaining and present stock of vaccines must be tracked | Future |
| LR05 | Vaccine vials must be tracked for its use within a day | Future |

# SWOT
  ![SWOT of vacccine registration](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/b332d0c9ff5cc7a40af651dc028259f600ab6773/1_Requirements/SWOT%20of%20vacccine%20registration.jpg)
# 4W's & 1H
 ![4 W's and 1 H](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/ad903af11ad37efce107c15e852f363a3933e3d5/1_Requirements/4%20W's%20and%201%20H.jpg)

## Aim
*  To create a registration form for vaccination.
*  For both exiting and old user.
*  To Provide the certificate from vaccination provider.
## Input
* personal details like aadhar,name,phone number,age,etc
* New register patients can have the option to select the vaccine type.
## Process
* Aadhar number are verified and matcher for exciting user
* If patient exiting continue second short form is open.
* For new user must fill the detail and select vaccinate type for registration.
* The user must enter the details of vaccine provider and submit form to generate the certificate.

## Output
* Vaccination datas are updated.
* Automatic certificated is generated with beneficiary detail and vaccine details. 

# Design
  # Structural
   ![1_structure diagram](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/96a81d566a3f85af9a474fac946a9ad571b06c1d/2_Architecture/1_structure%20diagram.png)
  
  # Behavioural
   ![2_behavioral diagram](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/96a81d566a3f85af9a474fac946a9ad571b06c1d/2_Architecture/2_behavioral%20diagram.jpg)


## Login 
   ![1_login](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/8218cf382b4284d0485d700459bb586299cc9136/6_Image%20and%20videos/1_login.PNG)
   
## Registration 
   ![2_Registration](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/8218cf382b4284d0485d700459bb586299cc9136/6_Image%20and%20videos/2_Registration.PNG)
   
## certificate
   ![3_certificate](https://github.com/rajprasanth27k/M1_COWIN-PORTAL_UTI/blob/8218cf382b4284d0485d700459bb586299cc9136/6_Image%20and%20videos/3_certificate.PNG)


