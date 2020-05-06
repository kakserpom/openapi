# coding: utf-8

"""
    Manticore Search API

    This is the API for Manticore Search HTTP protocol  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: adrian.nuta@manticoresearch.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.insert import Insert  # noqa: E501
from openapi_client.rest import ApiException

class TestInsert(unittest.TestCase):
    """Insert unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Insert
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.insert.Insert()  # noqa: E501
        if include_optional :
            return Insert(
                id = 1, 
                index = 'myindex', 
                doc = {"gid":10,"content":"new document"}
            )
        else :
            return Insert(
                id = 1,
                index = 'myindex',
                doc = {"gid":10,"content":"new document"},
        )

    def testInsert(self):
        """Test Insert"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
