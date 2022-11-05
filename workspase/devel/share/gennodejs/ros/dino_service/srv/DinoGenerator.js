// Auto-generated. Do not edit!

// (in-package dino_service.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class DinoGeneratorRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.word = null;
    }
    else {
      if (initObj.hasOwnProperty('word')) {
        this.word = initObj.word
      }
      else {
        this.word = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DinoGeneratorRequest
    // Serialize message field [word]
    bufferOffset = _serializer.string(obj.word, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DinoGeneratorRequest
    let len;
    let data = new DinoGeneratorRequest(null);
    // Deserialize message field [word]
    data.word = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.word);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dino_service/DinoGeneratorRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cf5cbdd7f0c6b9eaa898f882ab6eade6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string word
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DinoGeneratorRequest(null);
    if (msg.word !== undefined) {
      resolved.word = msg.word;
    }
    else {
      resolved.word = ''
    }

    return resolved;
    }
};

class DinoGeneratorResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dino_name = null;
    }
    else {
      if (initObj.hasOwnProperty('dino_name')) {
        this.dino_name = initObj.dino_name
      }
      else {
        this.dino_name = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DinoGeneratorResponse
    // Serialize message field [dino_name]
    bufferOffset = _serializer.string(obj.dino_name, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DinoGeneratorResponse
    let len;
    let data = new DinoGeneratorResponse(null);
    // Deserialize message field [dino_name]
    data.dino_name = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.dino_name);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dino_service/DinoGeneratorResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ea2ca4c17f5a337d40dac4f6eb540f6a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string dino_name
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DinoGeneratorResponse(null);
    if (msg.dino_name !== undefined) {
      resolved.dino_name = msg.dino_name;
    }
    else {
      resolved.dino_name = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: DinoGeneratorRequest,
  Response: DinoGeneratorResponse,
  md5sum() { return '05cbef6d39d9b92810fa937192b245b1'; },
  datatype() { return 'dino_service/DinoGenerator'; }
};
