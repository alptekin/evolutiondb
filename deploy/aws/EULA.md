# End-User License Agreement — EvolutionDB

**Effective date:** 2026-05-06
**Licensor:** EvolutionDB Project ("Licensor")
**Software:** EvolutionDB ("Software"), distributed via AWS
Marketplace under the Amazon Machine Image, container, and AWS-hosted
SaaS delivery methods.

This End-User License Agreement ("Agreement") is between Licensor and
the entity or person ("Licensee") who subscribes to, installs, or
otherwise uses the Software. By subscribing on AWS Marketplace,
launching a container that contains the Software, or otherwise using
the Software, Licensee agrees to be bound by this Agreement.

---

## 1. License grant

Subject to the terms of this Agreement, the Software's open-source
distribution is licensed under the **MIT License**, a copy of which
is reproduced in `COPYRIGHT.md` in the source tree at
https://github.com/alptekin/evolutiondb. Licensee receives a
non-exclusive, worldwide, royalty-free right to use, copy, modify,
merge, publish, distribute, sublicense, and/or sell copies of the
Software, subject to the conditions in the MIT License.

The marketplace listing wraps the open-source distribution; the MIT
License governs the Software itself. This Agreement governs the
marketplace-specific delivery, support, and any paid tiers offered
through AWS Marketplace.

## 2. AWS Marketplace terms

Licensee's use of the Software through AWS Marketplace is also
governed by:
- The AWS Customer Agreement (https://aws.amazon.com/agreement/)
- The AWS Service Terms (https://aws.amazon.com/service-terms/)

Where this Agreement conflicts with those AWS terms, the AWS terms
control for billing, account, and infrastructure aspects, and this
Agreement controls for the Software itself.

## 3. Support

The free tier ($0/hr) of the Software listing is delivered "as-is"
with community support only:
- GitHub Issues: https://github.com/alptekin/evolutiondb/issues
- Documentation: https://alptekin.github.io/evolutiondb/

Paid support contracts (when offered) are governed by a separate
support agreement.

## 4. Disclaimer of warranties

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND
NONINFRINGEMENT. LICENSOR DOES NOT WARRANT THAT THE SOFTWARE WILL
MEET LICENSEE'S REQUIREMENTS, OPERATE WITHOUT INTERRUPTION, OR BE
ERROR-FREE.

## 5. Limitation of liability

IN NO EVENT SHALL LICENSOR BE LIABLE FOR ANY CLAIM, DAMAGES, OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF, OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. IN
PARTICULAR, LICENSOR IS NOT LIABLE FOR DATA LOSS, REVENUE LOSS,
OR ANY INDIRECT, INCIDENTAL, OR CONSEQUENTIAL DAMAGES.

LICENSEE IS RESPONSIBLE FOR BACKING UP THEIR DATA, IMPLEMENTING
APPROPRIATE DISASTER RECOVERY PROCEDURES, AND TESTING THE
SOFTWARE IN A NON-PRODUCTION ENVIRONMENT BEFORE DEPLOYING IT TO
PRODUCTION. THE SOFTWARE INCLUDES OPTIONAL FEATURES (TDE,
REPLICATION, WAL) THAT LICENSEE MUST CONFIGURE; LICENSOR IS NOT
LIABLE FOR DATA LOSS RESULTING FROM MISCONFIGURATION OF THESE
FEATURES.

## 6. Data privacy

The Software runs entirely within Licensee's own AWS account and
does not transmit telemetry, analytics, or customer data to
Licensor. Licensee is the sole controller of any data stored in
the Software. Licensor has no access to Licensee's data unless
Licensee explicitly opts into a paid support contract that
provides for it (and even then only with Licensee's explicit
authorization for each access event).

## 7. Compliance

The Software's storage layer supports Transparent Data Encryption
(TDE) using AES-256-CTR, row-level security policies, and
PBKDF2-SHA256 password hashing. Licensee is responsible for
configuring these features to meet any applicable regulatory
requirements (HIPAA, GDPR, PCI-DSS, etc.). Licensor does not
warrant that the default configuration satisfies any specific
compliance standard.

## 8. Termination

This Agreement terminates automatically if Licensee fails to
comply with any of its terms. On termination, Licensee must cease
all use of the Software. Sections 4, 5, 6, and 9 survive
termination.

## 9. Governing law

This Agreement is governed by the laws of the jurisdiction in
which Licensor is established, without regard to its conflict of
law principles. Any dispute arising under this Agreement will be
resolved exclusively in the courts of that jurisdiction.

## 10. Entire agreement

This Agreement, together with the MIT License and the applicable
AWS terms, constitutes the entire agreement between Licensor and
Licensee with respect to the Software. Any modification must be in
writing and signed by both parties.

---

For questions about this Agreement, contact:
**topal.alptekin@gmail.com**
