
"use strict";

let GetGPIOConfiguration = require('./GetGPIOConfiguration.js')
let GetUARTConfiguration = require('./GetUARTConfiguration.js')
let I2CReadRegister = require('./I2CReadRegister.js')
let GetGPIOState = require('./GetGPIOState.js')
let GetI2CConfiguration = require('./GetI2CConfiguration.js')
let SetUARTConfiguration = require('./SetUARTConfiguration.js')
let SetGPIOState = require('./SetGPIOState.js')
let I2CRead = require('./I2CRead.js')
let SetGPIOConfiguration = require('./SetGPIOConfiguration.js')
let SetEthernetConfiguration = require('./SetEthernetConfiguration.js')
let I2CWriteRegister = require('./I2CWriteRegister.js')
let I2CWrite = require('./I2CWrite.js')
let GetEthernetConfiguration = require('./GetEthernetConfiguration.js')
let SetI2CConfiguration = require('./SetI2CConfiguration.js')

module.exports = {
  GetGPIOConfiguration: GetGPIOConfiguration,
  GetUARTConfiguration: GetUARTConfiguration,
  I2CReadRegister: I2CReadRegister,
  GetGPIOState: GetGPIOState,
  GetI2CConfiguration: GetI2CConfiguration,
  SetUARTConfiguration: SetUARTConfiguration,
  SetGPIOState: SetGPIOState,
  I2CRead: I2CRead,
  SetGPIOConfiguration: SetGPIOConfiguration,
  SetEthernetConfiguration: SetEthernetConfiguration,
  I2CWriteRegister: I2CWriteRegister,
  I2CWrite: I2CWrite,
  GetEthernetConfiguration: GetEthernetConfiguration,
  SetI2CConfiguration: SetI2CConfiguration,
};
