#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D5DE30
// Address: 0x1d5de30 - 0x1d5df30
void sub_01D5DE30_0x1d5de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DE30_0x1d5de30");
#endif

    switch (ctx->pc) {
        case 0x1d5de60u: goto label_1d5de60;
        case 0x1d5de90u: goto label_1d5de90;
        case 0x1d5dea0u: goto label_1d5dea0;
        case 0x1d5deb0u: goto label_1d5deb0;
        case 0x1d5df08u: goto label_1d5df08;
        default: break;
    }

    ctx->pc = 0x1d5de30u;

    // 0x1d5de30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5de34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5de38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5de3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5de40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5de40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5de44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5de48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5de4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d5de4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5de50: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5de50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5de54: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d5de54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d5de58: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DE58u;
    SET_GPR_U32(ctx, 31, 0x1D5DE60u);
    ctx->pc = 0x1D5DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE58u;
    // 0x1d5de5c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DE58u, 0x1D5DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE60u;
label_1d5de60:
    // 0x1d5de60: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d5de60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d5de64: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d5de64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5de68: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d5de68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d5de6c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d5de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d5de70: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d5de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d5de74: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d5de74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d5de78: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d5de78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5de7c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d5de7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d5de80: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d5de80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5de84: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d5de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5de88: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DE88u;
    SET_GPR_U32(ctx, 31, 0x1D5DE90u);
    ctx->pc = 0x1D5DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE88u;
    // 0x1d5de8c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DE88u, 0x1D5DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE90u;
label_1d5de90:
    // 0x1d5de90: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d5de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d5de94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5de98: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DE98u;
    SET_GPR_U32(ctx, 31, 0x1D5DEA0u);
    ctx->pc = 0x1D5DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE98u;
    // 0x1d5de9c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DE98u, 0x1D5DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DEA0u;
label_1d5dea0:
    // 0x1d5dea0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d5dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d5dea4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dea8: 0xc757348  jal         func_1D5CD20
    ctx->pc = 0x1D5DEA8u;
    SET_GPR_U32(ctx, 31, 0x1D5DEB0u);
    ctx->pc = 0x1D5DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DEA8u;
    // 0x1d5deac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD20u, 0x1D5DEA8u, 0x1D5DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DEB0u;
label_1d5deb0:
    // 0x1d5deb0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d5deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5deb4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5deb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5deb8: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d5deb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5debc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d5debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d5dec0: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d5dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d5dec4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d5dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d5dec8: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d5dec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d5decc: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d5deccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d5ded0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d5ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ded4: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d5ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d5ded8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d5ded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d5dedc: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d5dedcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d5dee0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d5dee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dee4: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d5dee4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d5dee8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5dee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d5deec: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d5deecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d5def0: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d5def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d5def4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d5def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5def8: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d5def8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d5defc: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d5defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d5df00: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DF00u;
    SET_GPR_U32(ctx, 31, 0x1D5DF08u);
    ctx->pc = 0x1D5DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DF00u;
    // 0x1d5df04: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DF00u, 0x1D5DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF08u;
label_1d5df08:
    // 0x1d5df08: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d5df08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d5df0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5df10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5df14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d5df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5df18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5df1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5df1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5df20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5df20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5df24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5df24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5df28: 0x8757346  j           func_1D5CD18
    ctx->pc = 0x1D5DF28u;
    ctx->pc = 0x1D5DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DF28u;
    // 0x1d5df2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    sub_01D5CD18_0x1d5cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5DF30u;
}
