/*
 * Manticore Search Client
 *
 * Low-level client for Manticore Search. 
 *
 * The version of the OpenAPI document: 1.0.0
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
    /// Response object of a search request
    /// </summary>
    [DataContract(Name = "searchResponse")]
    public partial class SearchResponse : IEquatable<SearchResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SearchResponse" /> class.
        /// </summary>
        /// <param name="took">took.</param>
        /// <param name="timedOut">timedOut.</param>
        /// <param name="aggregations">aggregations.</param>
        /// <param name="hits">hits.</param>
        /// <param name="profile">profile.</param>
        /// <param name="warning">warning.</param>
        public SearchResponse(int took = default(int), bool timedOut = default(bool), Dictionary<string, Object> aggregations = default(Dictionary<string, Object>), SearchResponseHits hits = default(SearchResponseHits), Object profile = default(Object), Dictionary<string, Object> warning = default(Dictionary<string, Object>))
        {
            this.Took = took;
            this.TimedOut = timedOut;
            this.Aggregations = aggregations;
            this.Hits = hits;
            this.Profile = profile;
            this.Warning = warning;
        }

        /// <summary>
        /// Gets or Sets Took
        /// </summary>
        [DataMember(Name = "took", EmitDefaultValue = false)]
        public int Took { get; set; }

        /// <summary>
        /// Gets or Sets TimedOut
        /// </summary>
        [DataMember(Name = "timed_out", EmitDefaultValue = true)]
        public bool TimedOut { get; set; }

        /// <summary>
        /// Gets or Sets Aggregations
        /// </summary>
        [DataMember(Name = "aggregations", EmitDefaultValue = false)]
        public Dictionary<string, Object> Aggregations { get; set; }

        /// <summary>
        /// Gets or Sets Hits
        /// </summary>
        [DataMember(Name = "hits", EmitDefaultValue = false)]
        public SearchResponseHits Hits { get; set; }

        /// <summary>
        /// Gets or Sets Profile
        /// </summary>
        [DataMember(Name = "profile", EmitDefaultValue = false)]
        public Object Profile { get; set; }

        /// <summary>
        /// Gets or Sets Warning
        /// </summary>
        [DataMember(Name = "warning", EmitDefaultValue = false)]
        public Dictionary<string, Object> Warning { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class SearchResponse {\n");
            sb.Append("  Took: ").Append(Took).Append("\n");
            sb.Append("  TimedOut: ").Append(TimedOut).Append("\n");
            sb.Append("  Aggregations: ").Append(Aggregations).Append("\n");
            sb.Append("  Hits: ").Append(Hits).Append("\n");
            sb.Append("  Profile: ").Append(Profile).Append("\n");
            sb.Append("  Warning: ").Append(Warning).Append("\n");
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
            return this.Equals(input as SearchResponse);
        }

        /// <summary>
        /// Returns true if SearchResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of SearchResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(SearchResponse input)
        {
            if (input == null)
            {
                return false;
            }
            return 
                (
                    this.Took == input.Took ||
                    this.Took.Equals(input.Took)
                ) && 
                (
                    this.TimedOut == input.TimedOut ||
                    this.TimedOut.Equals(input.TimedOut)
                ) && 
                (
                    this.Aggregations == input.Aggregations ||
                    this.Aggregations != null &&
                    input.Aggregations != null &&
                    this.Aggregations.SequenceEqual(input.Aggregations)
                ) && 
                (
                    this.Hits == input.Hits ||
                    (this.Hits != null &&
                    this.Hits.Equals(input.Hits))
                ) && 
                (
                    this.Profile == input.Profile ||
                    (this.Profile != null &&
                    this.Profile.Equals(input.Profile))
                ) && 
                (
                    this.Warning == input.Warning ||
                    this.Warning != null &&
                    input.Warning != null &&
                    this.Warning.SequenceEqual(input.Warning)
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
                hashCode = (hashCode * 59) + this.Took.GetHashCode();
                hashCode = (hashCode * 59) + this.TimedOut.GetHashCode();
                if (this.Aggregations != null)
                {
                    hashCode = (hashCode * 59) + this.Aggregations.GetHashCode();
                }
                if (this.Hits != null)
                {
                    hashCode = (hashCode * 59) + this.Hits.GetHashCode();
                }
                if (this.Profile != null)
                {
                    hashCode = (hashCode * 59) + this.Profile.GetHashCode();
                }
                if (this.Warning != null)
                {
                    hashCode = (hashCode * 59) + this.Warning.GetHashCode();
                }
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