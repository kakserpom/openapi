/*
 * Manticore Search Client
 * Сlient for Manticore Search. 
 *
 * The version of the OpenAPI document: 3.3.0
 * Contact: info@manticoresearch.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.manticoresearch.client.model;

import java.util.Objects;
import java.util.Arrays;
import java.util.Map;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.JsonValue;
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.manticoresearch.client.JSON;


/**
 * Geo pin point object
 */
@JsonPropertyOrder({
  GeoDistanceFilterLocationAnchor.JSON_PROPERTY_LAT,
  GeoDistanceFilterLocationAnchor.JSON_PROPERTY_LON
})
@JsonTypeName("geoDistanceFilter_location_anchor")
@JsonIgnoreProperties(ignoreUnknown = true)
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2023-05-28T11:55:17.809597Z[Etc/UTC]")
public class GeoDistanceFilterLocationAnchor {
  public static final String JSON_PROPERTY_LAT = "lat";
  private BigDecimal lat;

  public static final String JSON_PROPERTY_LON = "lon";
  private BigDecimal lon;

  public GeoDistanceFilterLocationAnchor() { 
  }

  public GeoDistanceFilterLocationAnchor lat(BigDecimal lat) {
    this.lat = lat;
    return this;
  }

   /**
   * Geo latitude of pin point in degrees
   * @return lat
  **/
  @javax.annotation.Nullable
  @JsonProperty(JSON_PROPERTY_LAT)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)

  public BigDecimal getLat() {
    return lat;
  }


  @JsonProperty(JSON_PROPERTY_LAT)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
  public void setLat(BigDecimal lat) {
    this.lat = lat;
  }


  public GeoDistanceFilterLocationAnchor lon(BigDecimal lon) {
    this.lon = lon;
    return this;
  }

   /**
   * Geo longitude pf pin point in degrees
   * @return lon
  **/
  @javax.annotation.Nullable
  @JsonProperty(JSON_PROPERTY_LON)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)

  public BigDecimal getLon() {
    return lon;
  }


  @JsonProperty(JSON_PROPERTY_LON)
  @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
  public void setLon(BigDecimal lon) {
    this.lon = lon;
  }


  /**
   * Return true if this geoDistanceFilter_location_anchor object is equal to o.
   */
  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GeoDistanceFilterLocationAnchor geoDistanceFilterLocationAnchor = (GeoDistanceFilterLocationAnchor) o;
    return Objects.equals(this.lat, geoDistanceFilterLocationAnchor.lat) &&
        Objects.equals(this.lon, geoDistanceFilterLocationAnchor.lon);
  }

  @Override
  public int hashCode() {
    return Objects.hash(lat, lon);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GeoDistanceFilterLocationAnchor {\n");
    sb.append("    lat: ").append(toIndentedString(lat)).append("\n");
    sb.append("    lon: ").append(toIndentedString(lon)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

