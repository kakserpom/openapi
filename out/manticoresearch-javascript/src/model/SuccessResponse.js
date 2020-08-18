/**
 * Manticore Search Client
 * Please note that this client is experimental. For full documentation of the API methods consult https://manual.manticoresearch.com/. 
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: info@manticoresearch.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 5.0.0-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.ManticoreSearchClient) {
      root.ManticoreSearchClient = {};
    }
    root.ManticoreSearchClient.SuccessResponse = factory(root.ManticoreSearchClient.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';



  /**
   * The SuccessResponse model module.
   * @module model/SuccessResponse
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>SuccessResponse</code>.
   * Success response
   * @alias module:model/SuccessResponse
   * @class
   */
  var exports = function() {
    var _this = this;

  };

  /**
   * Constructs a <code>SuccessResponse</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/SuccessResponse} obj Optional instance to populate.
   * @return {module:model/SuccessResponse} The populated <code>SuccessResponse</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('_index')) {
        obj['_index'] = ApiClient.convertToType(data['_index'], 'String');
      }
      if (data.hasOwnProperty('_id')) {
        obj['_id'] = ApiClient.convertToType(data['_id'], 'Number');
      }
      if (data.hasOwnProperty('created')) {
        obj['created'] = ApiClient.convertToType(data['created'], 'Boolean');
      }
      if (data.hasOwnProperty('result')) {
        obj['result'] = ApiClient.convertToType(data['result'], 'String');
      }
      if (data.hasOwnProperty('found')) {
        obj['found'] = ApiClient.convertToType(data['found'], 'Boolean');
      }
    }
    return obj;
  }

  /**
   * @member {String} _index
   */
  exports.prototype['_index'] = undefined;
  /**
   * @member {Number} _id
   */
  exports.prototype['_id'] = undefined;
  /**
   * @member {Boolean} created
   */
  exports.prototype['created'] = undefined;
  /**
   * @member {String} result
   */
  exports.prototype['result'] = undefined;
  /**
   * @member {Boolean} found
   */
  exports.prototype['found'] = undefined;



  return exports;
}));

