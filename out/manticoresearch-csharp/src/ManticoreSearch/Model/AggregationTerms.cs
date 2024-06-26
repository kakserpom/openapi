/*
 * Manticore Search Client
 *
 * Сlient for Manticore Search. 
 *
 * The version of the OpenAPI document: 3.3.1
 * Contact: info@manticoresearch.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using FileParameter = ManticoreSearch.Client.FileParameter;
using OpenAPIDateConverter = ManticoreSearch.Client.OpenAPIDateConverter;

namespace ManticoreSearch.Model
{
    /// <summary>
    /// AggregationTerms
    /// </summary>
    [DataContract(Name = "aggregation_terms")]
    public partial class AggregationTerms : IEquatable<AggregationTerms>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="AggregationTerms" /> class.
        /// </summary>
        /// <param name="field">Attribute Name to Aggregate.</param>
        /// <param name="size">Maximum Number of Buckets in the Result.</param>
        public AggregationTerms(string field = default(string), int size = default(int))
        {
            this.Field = field;
            this.Size = size;
        }

        /// <summary>
        /// Attribute Name to Aggregate
        /// </summary>
        /// <value>Attribute Name to Aggregate</value>
        [DataMember(Name = "field", EmitDefaultValue = false)]
        public string Field { get; set; }

        /// <summary>
        /// Maximum Number of Buckets in the Result
        /// </summary>
        /// <value>Maximum Number of Buckets in the Result</value>
        [DataMember(Name = "size", EmitDefaultValue = false)]
        public int Size { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class AggregationTerms {\n");
            sb.Append("  Field: ").Append(Field).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as AggregationTerms);
        }

        /// <summary>
        /// Returns true if AggregationTerms instances are equal
        /// </summary>
        /// <param name="input">Instance of AggregationTerms to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AggregationTerms input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Field == input.Field ||
                    (this.Field != null &&
                    this.Field.Equals(input.Field))
                ) && 
                (
                    this.Size == input.Size ||
                    this.Size.Equals(input.Size)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Field != null)
                {
                    hashCode = (hashCode * 59) + this.Field.GetHashCode();
                }
                hashCode = (hashCode * 59) + this.Size.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        public IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}